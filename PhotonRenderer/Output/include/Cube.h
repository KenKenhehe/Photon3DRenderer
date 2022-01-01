#include "Texture.h"

#include <stb\stb_image.h> 
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>

#include "Entity.h"

namespace Photon
{
	class PHOTON_API Cube : public Entity
	{
	public:
		Cube();
		Cube(float scale, glm::vec3 position);
		Cube(float scale, float posistion_x, float position_y, float position_z);
		Cube(float width, float height, float depth, glm::vec3 position);
		Cube(float width, float height, float depth, float posistion_x, float position_y, float position_z);
		Cube(glm::vec3 scale, glm::vec3 position);
		Cube(glm::vec3 scale, float posistion_x, float position_y, float position_z);
	public:
		void Draw(Camera* camera = nullptr) override;
		void Dispose() override;
		void LoadTexture(const std::string& file_path);

		void LoadDefaultShader();
		void LoadShader(Shader& shader);
		Shader GetShader() { return *m_shader; };
		glm::vec3 GetPosition() { return m_position; }

		//void Translate(glm::vec3 translation);
		//void Rotate(float angle, glm::vec3 axis);
	private:
		bool Init() override;


	private:

		//glm::vec3 m_position;
		glm::vec3 m_scale;
		//glm::mat4 m_model;
		Shader* m_shader;
		Texture* m_texure;
	};

}