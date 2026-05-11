#pragma once

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace Model;
using namespace Persistance;
namespace Controller {
	public ref class controller
	{
		public:
			static BrazoRobotico^ brazoSeleccionado = gcnew BrazoRobotico();
			static List<Model::BrazoRobotico^>^ brazosRoboticos = gcnew List<Model::BrazoRobotico^>();
			static void Initialize() {
				brazosRoboticos = persistance::readData();

			};
			static void eliminarBrazo(int id) {
				for (int i = 0; i < brazosRoboticos->Count; i++) {
					if (brazosRoboticos[i]->id == id) {
						brazosRoboticos->RemoveAt(i);
						break;
					}
				}
				persistance::saveData(brazosRoboticos);
			};
			
			static void agregarBrazo(BrazoRobotico ^ brazo) {
				brazosRoboticos->Add(brazo);
				persistance::saveData(brazosRoboticos);
			};

			static void actualizarBrazo(BrazoRobotico^ brazo) {
				for (int i = 0; i < brazosRoboticos->Count; i++) {
					if (brazosRoboticos[i]->id == brazo->id) {
						brazosRoboticos[i] = brazo;
						break;
					}
				}
				persistance::saveData(brazosRoboticos);
			};
		// TODO: Add your methods for this class here.
	};
}
