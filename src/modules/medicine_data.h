#pragma once

#include <array>
#include <map>
#include <span>
#include <string_view>

namespace faker::medicine
{
struct MedicineDefinition
{
    std::span<const std::string_view> medicalConditions;
    std::span<const std::string_view> medicalTests;
    std::span<const std::string_view> specialties;
};

//"en_US"
const auto enUSMedicalConditions = std::to_array<std::string_view>({
    "AIDS",
    "Anorexia Nervosa",
    "Arthritis Juvenile Rheumatoid",
    "Asthma Moderate or Severe Persistent",
    "Bronchiolitis",
    "Bulimia",
    "Cancer",
    "Cardiorespiratory Diseases",
    "Celiac Disease",
    "Cerebral Palsy",
    "Cleft Lip or Palate",
    "Crohn’s Disease",
    "Cystic Fibrosis",
    "Depression",
    "Developmental Sensory or Motor Disabilities",
    "Diabetes Mellitus",
    "Down syndrome",
    "Elevated Blood Lead Level",
    "Epilepsy",
    "Failure to Thrive",
    "Fetal Alcohol Syndrome",
    "Gall Bladder Disease",
    "Gastro Esophageal Reflux Disease",
    "Gastrointestinal Abnormalities",
    "HIV Infection",
    "Heart Disease",
    "Hepatitis",
    "Hypertension Chronic/Prehypertension",
    "Hypertension Pregnancy-induced",
    "Hyperthyroidism",
    "Hypoglycemia",
    "Hypothyroidism",
    "Inborn Errors of Metabolism",
    "Inflammatory Bowel Disease (IBD)",
    "Lactose Intolerance",
    "Large for Gestational Age",
    "Liver Disease",
    "Lupus Erythematosus",
    "Major Surgery Burns or Trauma",
    "Malabsorption Syndromes",
    "Meningitis",
    "Multiple Sclerosis",
    "Muscular Dystrophy",
    "Neonatal Abstinence Syndrome",
    "Neural Tube Defect (Spina Bifida)",
    "Nutrient Deficiency Diseases",
    "Pancreatitis",
    "Parasitic Infection",
    "Parkinson’s disease",
    "Pneumonia",
    "Prediabetes",
    "Renal Disease",
    "Sickle Cell Anemia",
    "Small Bowel Enterocolitis and syndrome",
    "Small for Gestational Age (SGA)",
    "Thalassemia Major",
    "Tuberculosis",
    "Ulcerative Colitis",
    "Ulcers Stomach or Intestinal",
});

const auto enUSMedicalTests = std::to_array<std::string_view>({
    "HEENT examination",
    "abdominal palpation",
    "amniocentesis",
    "ballistocardiogram",
    "capsule endoscopy",
    "cardiac auscultation",
    "coloscopy",
    "colposcopy",
    "coronary catheterization",
    "cystoscopy",
    "digital rectal examination",
    "echocardiography",
    "electrocardiogram",
    "electroencephalogram",
    "electromyography",
    "endoscopic retrograde cholangiopancreatography",
    "esophageal motility study",
    "esophageal pH monitoring",
    "esophagogastroduodenoscopy",
    "hearing test",
    "hysteroscopy",
    "laparoscopy",
    "laryngoscopy",
    "liver biopsy",
    "mammography",
    "neurological examination",
    "neuropsychological tests",
    "polysomnography",
    "psychiatric assessment",
    "pulmonary auscultation",
    "pulmonary plethysmography",
    "skin biopsy",
    "thoracentesis",
    "urodynamic testing",
    "vaginal examination",
});

const auto enUSSpecialties = std::to_array<std::string_view>({
    "Accident and emergency medicine",
    "Allergist",
    "Anaesthetics",
    "Cardiology",
    "Child psychiatry",
    "Clinical biology",
    "Clinical chemistry",
    "Clinical microbiology",
    "Clinical neurophysiology",
    "Craniofacial surgery",
    "Dermatology",
    "Endocrinology",
    "Family and General Medicine",
    "Gastroenterologic surgery",
    "Gastroenterology",
    "General Practice",
    "General surgery",
    "Geriatrics",
    "Hematology",
    "Immunology",
    "Infectious diseases",
    "Internal medicine",
    "Laboratory medicine",
    "Nephrology",
    "Neurology",
    "Neuropsychiatry",
    "Neurosurgery",
    "Nuclear medicine",
    "Obstetrics and gynaecology",
    "Occupational medicine",
    "Oncology",
    "Ophthalmology",
    "Oral and maxillofacial surgery",
    "Orthopaedics",
    "Otorhinolaryngology",
    "Paediatric surgery",
    "Paediatrics",
    "Pathology",
    "Pharmacology",
    "Physical medicine and rehabilitation",
    "Plastic surgery",
    "Podiatric surgery",
    "Preventive medicine",
    "Psychiatry",
    "Public health",
    "Radiation Oncology",
    "Radiology",
    "Respiratory medicine",
    "Rheumatology",
    "Stomatology",
    "Thoracic surgery",
    "Tropical medicine",
    "Urology",
    "Vascular surgery",
    "Venereology",
});

const MedicineDefinition enUSMedicineDefinition = {
    .medicalConditions = enUSMedicalConditions, .medicalTests = enUSMedicalTests, .specialties = enUSSpecialties};

//"es_AR"
const auto esARMedicalConditions = std::to_array<std::string_view>({
    "SIDA",
    "Anorexia nerviosa",
    "Artritis Reumatoide Juvenil",
    "Asma Moderada o Grave Persistente",
    "Bronquiolitis",
    "Bulimia",
    "Cáncer",
    "Enfermedades cardiorrespiratorias",
    "Enfermedad celíaca",
    "Parálisis cerebral",
    "labio hendido o paladar hendido",
    "Enfermedad de Crohn",
    "Fibrosis quística",
    "Depresión",
    "Discapacidades del desarrollo sensorial o motora",
    "Diabetes Mellitus",
    "Síndrome de Down",
    "Nivel elevado de plomo en sangre",
    "Epilepsia",
    "Síndrome de alcoholismo fetal",
    "Enfermedad de la vesícula biliar",
    "Enfermedad por reflujo gastroesofágico",
    "Anormalidades gastrointestinales",
    "Infección por VIH",
    "Cardiopatía",
    "Hepatitis",
    "Hipertensión Crónica/Prehipertensión",
    "Hipertensión inducida por el embarazo",
    "Hipertiroidismo",
    "hipoglucemia",
    "Hipotiroidismo",
    "Errores innatos del metabolismo",
    "Enfermedad Inflamatoria Intestinal (EII)",
    "Intolerancia a la lactosa",
    "Grande para la edad gestacional",
    "Enfermedad del hígado",
    "Lupus eritematoso",
    "Cirugía Mayor Quemaduras o Traumatismos",
    "Síndromes de malabsorción",
    "Meningitis",
    "Esclerosis múltiple",
    "Distrofia muscular",
    "Síndrome de abstinencia neonatal",
    "Defecto del tubo neural (espina bífida)",
    "Enfermedades por deficiencia de nutrientes",
    "Pancreatitis",
    "Infección parasitaria",
    "La enfermedad de Parkinson",
    "Neumonía",
    "prediabetes",
    "Enfermedad renal",
    "Anemia falciforme",
    "Enterocolitis y síndrome del intestino delgado",
    "Pequeño para la edad gestacional (PEG)",
    "Talasemia mayor",
    "Tuberculosis",
    "Colitis ulcerosa",
    "Úlceras Estómago o Intestinal",
});

const auto esARMedicalTests = std::to_array<std::string_view>({
    "examen HEENT",
    "palpación abdominal",
    "amniocentesis",
    "balistocardiograma",
    "cápsula endoscópica",
    "auscultación cardíaca",
    "coloscopía",
    "colposcopía",
    "cateterismo coronario",
    "cystoscopía",
    "examinación rectal digital",
    "ecocardiografía",
    "electrocardiográma",
    "electroencefalográma",
    "electromiografía",
    "colangiopancreatografía retrógrada endoscópica",
    "estudio de motilidad esofágica",
    "monitorización del pH esofágico",
    "esofagogastroduodenoscopia",
    "prueba de audición",
    "histeroscopia",
    "laparoscopia",
    "laringoscopia",
    "biopsia de hígado",
    "mamografía",
    "examen neurológico",
    "pruebas neuropsicológicas",
    "polisomnografía",
    "evaluación psiquiátrica",
    "auscultación pulmonar",
    "pletismografía pulmonar",
    "biopsia de piel",
    "toracocentesis",
    "pruebas urodinámicas",
    "examen vaginal",
});

const auto esARSpecialties = std::to_array<std::string_view>({
    "Medicina de emergencia y accidentes",
    "Alergias",
    "Estética",
    "Cardiología",
    "Psiquatría infantil",
    "Biología Clínica",
    "Química Clínica",
    "Microbiología Clínica",
    "Neurofisiología Clínica",
    "Cirugía Creaneofacial",
    "Dermatología",
    "Endocrinología",
    "Medicina General y Familiar",
    "Cirugía Gastroenterológica",
    "Gastroenterolgía",
    "Práctica General",
    "Cirugía General",
    "Geriátrico",
    "Hematología",
    "Immunología",
    "Enfermedades Infecciosas",
    "Medicina Interna",
    "Medicinal de Laboratorio",
    "Nefrología",
    "Neurología",
    "Neurosiquiatría",
    "Neurocirugía",
    "Medicina Nuclear",
    "Ginecología y Obstetricia",
    "Medicina Ocupacional",
    "Oncología",
    "Oftalmología",
    "Cirugía Oral y maxilofacial",
    "Ortopedía",
    "Otorrinolaringología",
    "Cirugía Pediátrica",
    "Pediatría",
    "Patología",
    "Farmacología",
    "Medicina física y de rehabilitación",
    "Cirugía Plástica",
    "Cirugía podológica",
    "Medicina Preventiva",
    "Psiquiatráa",
    "Salud Pública",
    "Oncología Radioterápica",
    "Radiología",
    "Medicina Respiratoría",
    "Reumatología",
    "Estomatología",
    "Cirugía Toráxica",
    "Medicina Tropical",
    "Urología",
    "Cirugía Vascular",
    "Venereología",
});

const MedicineDefinition esARMedicineDefinition = {
    .medicalConditions = esARMedicalConditions, .medicalTests = esARMedicalTests, .specialties = esARSpecialties};

//"pt_BR"
const auto ptBRMedicalConditions = std::to_array<std::string_view>(
    {"AIDS", "Anorexia nervosa", "Artrite Reumatóide Juvenil", "Asma Persistente Moderada ou Grave", "bronquiolite",
     "Bulimia", "Câncer", "Doenças cardiorrespiratórias", "Doença celíaca", "Paralisia cerebral",
     "lábio leporino ou fenda palatina", "Doença de Crohn", "Fibrose cística", "Depressão",
     "Deficiências de desenvolvimento sensorial ou motor", "Diabetes Mellitus", "Síndrome de Down",
     "Úlceras estomacais ou intestinais"});

const auto ptBRMedicalTests = std::to_array<std::string_view>({"exame HEENT",
                                                               "palpação abdominal",
                                                               "amniocentese",
                                                               "balistocardiograma",
                                                               "endoscopia por cápsula",
                                                               "ausculta cardíaca",
                                                               "coloscopia",
                                                               "colposcopia",
                                                               "cateterismo coronário",
                                                               "cistoscopia",
                                                               "exame retal digital",
                                                               "ecocardiografia",
                                                               "eletrocardiograma",
                                                               "eletroencefalograma",
                                                               "eletromiografia",
                                                               "colangiopancreatografia retrógrada endoscópica",
                                                               "estudo da motilidade esofágica",
                                                               "monitoramento do pH esofágico",
                                                               "esofagogastroduodenoscopia",
                                                               "teste de audição",
                                                               "histeroscopia",
                                                               "laparoscopia",
                                                               "laringoscopia",
                                                               "biópsia hepática",
                                                               "mamografia",
                                                               "exame neurológico",
                                                               "testes neuropsicológicos",
                                                               "polissonografia",
                                                               "avaliação psiquiátrica",
                                                               "ausculta pulmonar",
                                                               "pletismografia pulmonar",
                                                               "biópsia de pele",
                                                               "toracocentese",
                                                               "testes urodinâmicos",
                                                               "exame vaginal"});

const auto ptBRSpecialties = std::to_array<std::string_view>({
    "Medicina de emergência e acidentes",
    "Alergias",
    "Estética",
    "Cardiologia",
    "Psiquiatria infantil",
    "Biologia Clínica",
    "Química Clínica",
    "Microbiologia Clínica",
    "Neurofisiologia Clínica",
    "Cirurgia Creneofacial",
    "Dermatologia",
    "Endocrinologia",
    "Medicina Geral e Familiar",
    "Cirurgia Gastroenterológica",
    "Gastroenterologia",
    "Clínica Geral",
    "Cirurgia Geral",
    "Geriátrica",
    "Hematologia",
    "Imunologia",
    "Doenças Infecciosas",
    "Medicina interna",
    "Medicina Laboratorial",
    "Nefrologia",
    "Neurologia",
    "Neuropsiquiatria",
    "Neurocirurgia",
    "Medicina Nuclear",
    "Ginecologia e Obstetrícia",
    "Medicina Ocupacional",
    "Oncologia",
    "Oftalmologia",
    "Cirurgia Oral e Maxilofacial",
    "Ortopedia",
    "Otorrinolaringologia",
    "Cirurgia Pediátrica",
    "Pediatria",
    "Patologia",
    "Farmacologia",
    "Medicina Física e de Reabilitação",
    "Cirurgia plástica",
    "Cirurgia Podiátrica",
    "Medicina preventiva",
    "Psiquiatria",
    "Saúde pública",
    "Oncologia de Radiação",
    "Radiologia",
    "Medicina Respiratória",
    "Reumatologia",
    "Estomatologia",
    "Cirurgia Toráxica",
    "Medicina Tropical",
    "Urologia",
    "Cirurgia Vascular",
    "Venereologia",
});

const MedicineDefinition ptBRMedicineDefinition = {
    .medicalConditions = ptBRMedicalConditions, .medicalTests = ptBRMedicalTests, .specialties = ptBRSpecialties};

const std::map<faker::Locale, const MedicineDefinition> medicineMapSpan({
    {faker::Locale::en_US, {enUSMedicineDefinition}}, {faker::Locale::pt_BR, {ptBRMedicineDefinition}},
    {faker::Locale::es_AR, {esARMedicineDefinition}}, {faker::Locale::es_BO, {esARMedicineDefinition}},
    {faker::Locale::es_CL, {esARMedicineDefinition}}, {faker::Locale::es_CO, {esARMedicineDefinition}},
    {faker::Locale::es_CR, {esARMedicineDefinition}}, {faker::Locale::es_DO, {esARMedicineDefinition}},
    {faker::Locale::es_EC, {esARMedicineDefinition}}, {faker::Locale::es_ES, {esARMedicineDefinition}},
    {faker::Locale::es_GT, {esARMedicineDefinition}}, {faker::Locale::es_HN, {esARMedicineDefinition}},
    {faker::Locale::es_MX, {esARMedicineDefinition}}, {faker::Locale::es_NI, {esARMedicineDefinition}},
    {faker::Locale::es_PA, {esARMedicineDefinition}}, {faker::Locale::es_PE, {esARMedicineDefinition}},
    {faker::Locale::es_PR, {esARMedicineDefinition}}, {faker::Locale::es_PY, {esARMedicineDefinition}},
    {faker::Locale::es_US, {esARMedicineDefinition}}, {faker::Locale::es_SV, {esARMedicineDefinition}},
    {faker::Locale::es_UY, {esARMedicineDefinition}}, {faker::Locale::es_VE, {esARMedicineDefinition}},
});

}