#include <stdint.h>

#if 0
/usr/local/google/home/gfan/proj/VulkanSamples/API-Samples/android/../spirv_specialization/spirv_specialization.vert
// Module Version 10000
// Generated by (magic number): 80007
// Id's are bound by 35

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Vertex 4  "main" 9 11 19 30
                              Source GLSL 400
                              SourceExtension  "GL_ARB_separate_shader_objects"
                              SourceExtension  "GL_ARB_shading_language_420pack"
                              Name 4  "main"
                              Name 9  "texcoord"
                              Name 11  "inTexCoords"
                              Name 17  "gl_PerVertex"
                              MemberName 17(gl_PerVertex) 0  "gl_Position"
                              MemberName 17(gl_PerVertex) 1  "gl_PointSize"
                              MemberName 17(gl_PerVertex) 2  "gl_ClipDistance"
                              Name 19  ""
                              Name 23  "buf"
                              MemberName 23(buf) 0  "mvp"
                              Name 25  "ubuf"
                              Name 30  "pos"
                              Decorate 9(texcoord) Location 0
                              Decorate 11(inTexCoords) Location 1
                              MemberDecorate 17(gl_PerVertex) 0 BuiltIn Position
                              MemberDecorate 17(gl_PerVertex) 1 BuiltIn PointSize
                              MemberDecorate 17(gl_PerVertex) 2 BuiltIn ClipDistance
                              Decorate 17(gl_PerVertex) Block
                              MemberDecorate 23(buf) 0 ColMajor
                              MemberDecorate 23(buf) 0 Offset 0
                              MemberDecorate 23(buf) 0 MatrixStride 16
                              Decorate 23(buf) Block
                              Decorate 25(ubuf) DescriptorSet 0
                              Decorate 25(ubuf) Binding 0
                              Decorate 30(pos) Location 0
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeFloat 32
               7:             TypeVector 6(float) 2
               8:             TypePointer Output 7(fvec2)
     9(texcoord):      8(ptr) Variable Output
              10:             TypePointer Input 7(fvec2)
 11(inTexCoords):     10(ptr) Variable Input
              13:             TypeVector 6(float) 4
              14:             TypeInt 32 0
              15:     14(int) Constant 1
              16:             TypeArray 6(float) 15
17(gl_PerVertex):             TypeStruct 13(fvec4) 6(float) 16
              18:             TypePointer Output 17(gl_PerVertex)
              19:     18(ptr) Variable Output
              20:             TypeInt 32 1
              21:     20(int) Constant 0
              22:             TypeMatrix 13(fvec4) 4
         23(buf):             TypeStruct 22
              24:             TypePointer Uniform 23(buf)
        25(ubuf):     24(ptr) Variable Uniform
              26:             TypePointer Uniform 22
              29:             TypePointer Input 13(fvec4)
         30(pos):     29(ptr) Variable Input
              33:             TypePointer Output 13(fvec4)
         4(main):           2 Function None 3
               5:             Label
              12:    7(fvec2) Load 11(inTexCoords)
                              Store 9(texcoord) 12
              27:     26(ptr) AccessChain 25(ubuf) 21
              28:          22 Load 27
              31:   13(fvec4) Load 30(pos)
              32:   13(fvec4) MatrixTimesVector 28 31
              34:     33(ptr) AccessChain 19 21
                              Store 34 32
                              Return
                              FunctionEnd
#endif

static const uint32_t spirv_specialization_vert[296] = {
    0x07230203, 0x00010000, 0x00080007, 0x00000023,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0009000f, 0x00000000, 0x00000004, 0x6e69616d,
    0x00000000, 0x00000009, 0x0000000b, 0x00000013,
    0x0000001e, 0x00030003, 0x00000002, 0x00000190,
    0x00090004, 0x415f4c47, 0x735f4252, 0x72617065,
    0x5f657461, 0x64616873, 0x6f5f7265, 0x63656a62,
    0x00007374, 0x00090004, 0x415f4c47, 0x735f4252,
    0x69646168, 0x6c5f676e, 0x75676e61, 0x5f656761,
    0x70303234, 0x006b6361, 0x00040005, 0x00000004,
    0x6e69616d, 0x00000000, 0x00050005, 0x00000009,
    0x63786574, 0x64726f6f, 0x00000000, 0x00050005,
    0x0000000b, 0x65546e69, 0x6f6f4378, 0x00736472,
    0x00060005, 0x00000011, 0x505f6c67, 0x65567265,
    0x78657472, 0x00000000, 0x00060006, 0x00000011,
    0x00000000, 0x505f6c67, 0x7469736f, 0x006e6f69,
    0x00070006, 0x00000011, 0x00000001, 0x505f6c67,
    0x746e696f, 0x657a6953, 0x00000000, 0x00070006,
    0x00000011, 0x00000002, 0x435f6c67, 0x4470696c,
    0x61747369, 0x0065636e, 0x00030005, 0x00000013,
    0x00000000, 0x00030005, 0x00000017, 0x00667562,
    0x00040006, 0x00000017, 0x00000000, 0x0070766d,
    0x00040005, 0x00000019, 0x66756275, 0x00000000,
    0x00030005, 0x0000001e, 0x00736f70, 0x00040047,
    0x00000009, 0x0000001e, 0x00000000, 0x00040047,
    0x0000000b, 0x0000001e, 0x00000001, 0x00050048,
    0x00000011, 0x00000000, 0x0000000b, 0x00000000,
    0x00050048, 0x00000011, 0x00000001, 0x0000000b,
    0x00000001, 0x00050048, 0x00000011, 0x00000002,
    0x0000000b, 0x00000003, 0x00030047, 0x00000011,
    0x00000002, 0x00040048, 0x00000017, 0x00000000,
    0x00000005, 0x00050048, 0x00000017, 0x00000000,
    0x00000023, 0x00000000, 0x00050048, 0x00000017,
    0x00000000, 0x00000007, 0x00000010, 0x00030047,
    0x00000017, 0x00000002, 0x00040047, 0x00000019,
    0x00000022, 0x00000000, 0x00040047, 0x00000019,
    0x00000021, 0x00000000, 0x00040047, 0x0000001e,
    0x0000001e, 0x00000000, 0x00020013, 0x00000002,
    0x00030021, 0x00000003, 0x00000002, 0x00030016,
    0x00000006, 0x00000020, 0x00040017, 0x00000007,
    0x00000006, 0x00000002, 0x00040020, 0x00000008,
    0x00000003, 0x00000007, 0x0004003b, 0x00000008,
    0x00000009, 0x00000003, 0x00040020, 0x0000000a,
    0x00000001, 0x00000007, 0x0004003b, 0x0000000a,
    0x0000000b, 0x00000001, 0x00040017, 0x0000000d,
    0x00000006, 0x00000004, 0x00040015, 0x0000000e,
    0x00000020, 0x00000000, 0x0004002b, 0x0000000e,
    0x0000000f, 0x00000001, 0x0004001c, 0x00000010,
    0x00000006, 0x0000000f, 0x0005001e, 0x00000011,
    0x0000000d, 0x00000006, 0x00000010, 0x00040020,
    0x00000012, 0x00000003, 0x00000011, 0x0004003b,
    0x00000012, 0x00000013, 0x00000003, 0x00040015,
    0x00000014, 0x00000020, 0x00000001, 0x0004002b,
    0x00000014, 0x00000015, 0x00000000, 0x00040018,
    0x00000016, 0x0000000d, 0x00000004, 0x0003001e,
    0x00000017, 0x00000016, 0x00040020, 0x00000018,
    0x00000002, 0x00000017, 0x0004003b, 0x00000018,
    0x00000019, 0x00000002, 0x00040020, 0x0000001a,
    0x00000002, 0x00000016, 0x00040020, 0x0000001d,
    0x00000001, 0x0000000d, 0x0004003b, 0x0000001d,
    0x0000001e, 0x00000001, 0x00040020, 0x00000021,
    0x00000003, 0x0000000d, 0x00050036, 0x00000002,
    0x00000004, 0x00000000, 0x00000003, 0x000200f8,
    0x00000005, 0x0004003d, 0x00000007, 0x0000000c,
    0x0000000b, 0x0003003e, 0x00000009, 0x0000000c,
    0x00050041, 0x0000001a, 0x0000001b, 0x00000019,
    0x00000015, 0x0004003d, 0x00000016, 0x0000001c,
    0x0000001b, 0x0004003d, 0x0000000d, 0x0000001f,
    0x0000001e, 0x00050091, 0x0000000d, 0x00000020,
    0x0000001c, 0x0000001f, 0x00050041, 0x00000021,
    0x00000022, 0x00000013, 0x00000015, 0x0003003e,
    0x00000022, 0x00000020, 0x000100fd, 0x00010038,
};
