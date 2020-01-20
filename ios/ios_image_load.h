#include <vector>

std::vector<uint8_t> LoadImageFromFile(const char* file_name,
						 int* out_width,
						 int* out_height,
						 int* out_channels);

std::vector<uint8_t> LoadImageFromBase64String(NSString *base64String,
                                               int* out_width,
                                               int* out_height,
                                               int* out_channels);
