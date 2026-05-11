#pragma once

using namespace System;
using namespace Model;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::IO;

namespace Persistance {
	public ref class persistance
	{
		static String^ filePath = "brazosRoboticos.txt";
	public:
		static void saveData(List<BrazoRobotico^>^ brazos) {
			Console::WriteLine("Saving data to file...");
			FileStream^ fileStream = gcnew FileStream(filePath, FileMode::Create, FileAccess::Write);
			StreamWriter^ writer = gcnew StreamWriter(fileStream);
			for each (BrazoRobotico^ brazo in brazos) {
				writer->WriteLine(brazo->id + "," + brazo->nombre + "," + brazo->precio);
			}
			writer->Close();
			fileStream->Close();
		}

		static List<BrazoRobotico^>^ readData() {
			List<BrazoRobotico^>^ brazos = gcnew List<BrazoRobotico^>();
			if (System::IO::File::Exists(filePath)) {
				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
				String^ line;
				while ((line = reader->ReadLine()) != nullptr) {
					array<String^>^ parts = line->Split(',');
					BrazoRobotico^ brazo = gcnew BrazoRobotico();
					brazo->id = Convert::ToInt32(parts[0]);
					brazo->nombre = parts[1];
					brazo->precio = Convert::ToDouble(parts[2]);
					brazos->Add(brazo);
				}
			}
			return brazos;
		}
	};
}
