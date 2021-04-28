#include <stdint.h>

#if 0
/usr/local/google/home/gfan/proj/VulkanSamples/API-Samples/android/../11-init_shaders/11-init_shaders.frag
// Module Version 10000
// Generated by (magic number): 80007
// Id's are bound by 21

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Fragment 4  "main" 9 17
                              ExecutionMode 4 OriginUpperLeft
                              Source GLSL 400
                              SourceExtension  "GL_ARB_separate_shader_objects"
                              SourceExtension  "GL_ARB_shading_language_420pack"
                              Name 4  "main"
                              Name 9  "outColor"
                              Name 13  "tex"
                              Name 17  "texcoord"
                              Decorate 9(outColor) Location 0
                              Decorate 13(tex) DescriptorSet 0
                              Decorate 13(tex) Binding 1
                              Decorate 17(texcoord) Location 0
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeFloat 32
               7:             TypeVector 6(float) 4
               8:             TypePointer Output 7(fvec4)
     9(outColor):      8(ptr) Variable Output
              10:             TypeImage 6(float) 2D sampled format:Unknown
              11:             TypeSampledImage 10
              12:             TypePointer UniformConstant 11
         13(tex):     12(ptr) Variable UniformConstant
              15:             TypeVector 6(float) 2
              16:             TypePointer Input 15(fvec2)
    17(texcoord):     16(ptr) Variable Input
              19:    6(float) Constant 0
         4(main):           2 Function None 3
               5:             Label
              14:          11 Load 13(tex)
              18:   15(fvec2) Load 17(texcoord)
              20:    7(fvec4) ImageSampleExplicitLod 14 18 Lod 19
                              Store 9(outColor) 20
                              Return
                              FunctionEnd
#endif

static const uint32_t __init_shaders_frag[163] = {
    0x07230203, 0x00010000, 0x00080007, 0x00000015,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0007000f, 0x00000004, 0x00000004, 0x6e69616d,
    0x00000000, 0x00000009, 0x00000011, 0x00030010,
    0x00000004, 0x00000007, 0x00030003, 0x00000002,
    0x00000190, 0x00090004, 0x415f4c47, 0x735f4252,
    0x72617065, 0x5f657461, 0x64616873, 0x6f5f7265,
    0x63656a62, 0x00007374, 0x00090004, 0x415f4c47,
    0x735f4252, 0x69646168, 0x6c5f676e, 0x75676e61,
    0x5f656761, 0x70303234, 0x006b6361, 0x00040005,
    0x00000004, 0x6e69616d, 0x00000000, 0x00050005,
    0x00000009, 0x4374756f, 0x726f6c6f, 0x00000000,
    0x00030005, 0x0000000d, 0x00786574, 0x00050005,
    0x00000011, 0x63786574, 0x64726f6f, 0x00000000,
    0x00040047, 0x00000009, 0x0000001e, 0x00000000,
    0x00040047, 0x0000000d, 0x00000022, 0x00000000,
    0x00040047, 0x0000000d, 0x00000021, 0x00000001,
    0x00040047, 0x00000011, 0x0000001e, 0x00000000,
    0x00020013, 0x00000002, 0x00030021, 0x00000003,
    0x00000002, 0x00030016, 0x00000006, 0x00000020,
    0x00040017, 0x00000007, 0x00000006, 0x00000004,
    0x00040020, 0x00000008, 0x00000003, 0x00000007,
    0x0004003b, 0x00000008, 0x00000009, 0x00000003,
    0x00090019, 0x0000000a, 0x00000006, 0x00000001,
    0x00000000, 0x00000000, 0x00000000, 0x00000001,
    0x00000000, 0x0003001b, 0x0000000b, 0x0000000a,
    0x00040020, 0x0000000c, 0x00000000, 0x0000000b,
    0x0004003b, 0x0000000c, 0x0000000d, 0x00000000,
    0x00040017, 0x0000000f, 0x00000006, 0x00000002,
    0x00040020, 0x00000010, 0x00000001, 0x0000000f,
    0x0004003b, 0x00000010, 0x00000011, 0x00000001,
    0x0004002b, 0x00000006, 0x00000013, 0x00000000,
    0x00050036, 0x00000002, 0x00000004, 0x00000000,
    0x00000003, 0x000200f8, 0x00000005, 0x0004003d,
    0x0000000b, 0x0000000e, 0x0000000d, 0x0004003d,
    0x0000000f, 0x00000012, 0x00000011, 0x00070058,
    0x00000007, 0x00000014, 0x0000000e, 0x00000012,
    0x00000002, 0x00000013, 0x0003003e, 0x00000009,
    0x00000014, 0x000100fd, 0x00010038,
};
