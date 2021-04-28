#include <stdint.h>

#if 0
/usr/local/google/home/gfan/proj/VulkanSamples/API-Samples/android/../15-draw_cube/15-draw_cube.vert
// Module Version 10000
// Generated by (magic number): 80007
// Id's are bound by 32

                              Capability Shader
               1:             ExtInstImport  "GLSL.std.450"
                              MemoryModel Logical GLSL450
                              EntryPoint Vertex 4  "main" 9 11 18 28
                              Source GLSL 400
                              SourceExtension  "GL_ARB_separate_shader_objects"
                              SourceExtension  "GL_ARB_shading_language_420pack"
                              Name 4  "main"
                              Name 9  "outColor"
                              Name 11  "inColor"
                              Name 16  "gl_PerVertex"
                              MemberName 16(gl_PerVertex) 0  "gl_Position"
                              MemberName 16(gl_PerVertex) 1  "gl_PointSize"
                              MemberName 16(gl_PerVertex) 2  "gl_ClipDistance"
                              Name 18  ""
                              Name 22  "bufferVals"
                              MemberName 22(bufferVals) 0  "mvp"
                              Name 24  "myBufferVals"
                              Name 28  "pos"
                              Decorate 9(outColor) Location 0
                              Decorate 11(inColor) Location 1
                              MemberDecorate 16(gl_PerVertex) 0 BuiltIn Position
                              MemberDecorate 16(gl_PerVertex) 1 BuiltIn PointSize
                              MemberDecorate 16(gl_PerVertex) 2 BuiltIn ClipDistance
                              Decorate 16(gl_PerVertex) Block
                              MemberDecorate 22(bufferVals) 0 ColMajor
                              MemberDecorate 22(bufferVals) 0 Offset 0
                              MemberDecorate 22(bufferVals) 0 MatrixStride 16
                              Decorate 22(bufferVals) Block
                              Decorate 24(myBufferVals) DescriptorSet 0
                              Decorate 24(myBufferVals) Binding 0
                              Decorate 28(pos) Location 0
               2:             TypeVoid
               3:             TypeFunction 2
               6:             TypeFloat 32
               7:             TypeVector 6(float) 4
               8:             TypePointer Output 7(fvec4)
     9(outColor):      8(ptr) Variable Output
              10:             TypePointer Input 7(fvec4)
     11(inColor):     10(ptr) Variable Input
              13:             TypeInt 32 0
              14:     13(int) Constant 1
              15:             TypeArray 6(float) 14
16(gl_PerVertex):             TypeStruct 7(fvec4) 6(float) 15
              17:             TypePointer Output 16(gl_PerVertex)
              18:     17(ptr) Variable Output
              19:             TypeInt 32 1
              20:     19(int) Constant 0
              21:             TypeMatrix 7(fvec4) 4
  22(bufferVals):             TypeStruct 21
              23:             TypePointer Uniform 22(bufferVals)
24(myBufferVals):     23(ptr) Variable Uniform
              25:             TypePointer Uniform 21
         28(pos):     10(ptr) Variable Input
         4(main):           2 Function None 3
               5:             Label
              12:    7(fvec4) Load 11(inColor)
                              Store 9(outColor) 12
              26:     25(ptr) AccessChain 24(myBufferVals) 20
              27:          21 Load 26
              29:    7(fvec4) Load 28(pos)
              30:    7(fvec4) MatrixTimesVector 27 29
              31:      8(ptr) AccessChain 18 20
                              Store 31 30
                              Return
                              FunctionEnd
#endif

static const uint32_t __draw_cube_vert[287] = {
    0x07230203, 0x00010000, 0x00080007, 0x00000020,
    0x00000000, 0x00020011, 0x00000001, 0x0006000b,
    0x00000001, 0x4c534c47, 0x6474732e, 0x3035342e,
    0x00000000, 0x0003000e, 0x00000000, 0x00000001,
    0x0009000f, 0x00000000, 0x00000004, 0x6e69616d,
    0x00000000, 0x00000009, 0x0000000b, 0x00000012,
    0x0000001c, 0x00030003, 0x00000002, 0x00000190,
    0x00090004, 0x415f4c47, 0x735f4252, 0x72617065,
    0x5f657461, 0x64616873, 0x6f5f7265, 0x63656a62,
    0x00007374, 0x00090004, 0x415f4c47, 0x735f4252,
    0x69646168, 0x6c5f676e, 0x75676e61, 0x5f656761,
    0x70303234, 0x006b6361, 0x00040005, 0x00000004,
    0x6e69616d, 0x00000000, 0x00050005, 0x00000009,
    0x4374756f, 0x726f6c6f, 0x00000000, 0x00040005,
    0x0000000b, 0x6f436e69, 0x00726f6c, 0x00060005,
    0x00000010, 0x505f6c67, 0x65567265, 0x78657472,
    0x00000000, 0x00060006, 0x00000010, 0x00000000,
    0x505f6c67, 0x7469736f, 0x006e6f69, 0x00070006,
    0x00000010, 0x00000001, 0x505f6c67, 0x746e696f,
    0x657a6953, 0x00000000, 0x00070006, 0x00000010,
    0x00000002, 0x435f6c67, 0x4470696c, 0x61747369,
    0x0065636e, 0x00030005, 0x00000012, 0x00000000,
    0x00050005, 0x00000016, 0x66667562, 0x61567265,
    0x0000736c, 0x00040006, 0x00000016, 0x00000000,
    0x0070766d, 0x00060005, 0x00000018, 0x7542796d,
    0x72656666, 0x736c6156, 0x00000000, 0x00030005,
    0x0000001c, 0x00736f70, 0x00040047, 0x00000009,
    0x0000001e, 0x00000000, 0x00040047, 0x0000000b,
    0x0000001e, 0x00000001, 0x00050048, 0x00000010,
    0x00000000, 0x0000000b, 0x00000000, 0x00050048,
    0x00000010, 0x00000001, 0x0000000b, 0x00000001,
    0x00050048, 0x00000010, 0x00000002, 0x0000000b,
    0x00000003, 0x00030047, 0x00000010, 0x00000002,
    0x00040048, 0x00000016, 0x00000000, 0x00000005,
    0x00050048, 0x00000016, 0x00000000, 0x00000023,
    0x00000000, 0x00050048, 0x00000016, 0x00000000,
    0x00000007, 0x00000010, 0x00030047, 0x00000016,
    0x00000002, 0x00040047, 0x00000018, 0x00000022,
    0x00000000, 0x00040047, 0x00000018, 0x00000021,
    0x00000000, 0x00040047, 0x0000001c, 0x0000001e,
    0x00000000, 0x00020013, 0x00000002, 0x00030021,
    0x00000003, 0x00000002, 0x00030016, 0x00000006,
    0x00000020, 0x00040017, 0x00000007, 0x00000006,
    0x00000004, 0x00040020, 0x00000008, 0x00000003,
    0x00000007, 0x0004003b, 0x00000008, 0x00000009,
    0x00000003, 0x00040020, 0x0000000a, 0x00000001,
    0x00000007, 0x0004003b, 0x0000000a, 0x0000000b,
    0x00000001, 0x00040015, 0x0000000d, 0x00000020,
    0x00000000, 0x0004002b, 0x0000000d, 0x0000000e,
    0x00000001, 0x0004001c, 0x0000000f, 0x00000006,
    0x0000000e, 0x0005001e, 0x00000010, 0x00000007,
    0x00000006, 0x0000000f, 0x00040020, 0x00000011,
    0x00000003, 0x00000010, 0x0004003b, 0x00000011,
    0x00000012, 0x00000003, 0x00040015, 0x00000013,
    0x00000020, 0x00000001, 0x0004002b, 0x00000013,
    0x00000014, 0x00000000, 0x00040018, 0x00000015,
    0x00000007, 0x00000004, 0x0003001e, 0x00000016,
    0x00000015, 0x00040020, 0x00000017, 0x00000002,
    0x00000016, 0x0004003b, 0x00000017, 0x00000018,
    0x00000002, 0x00040020, 0x00000019, 0x00000002,
    0x00000015, 0x0004003b, 0x0000000a, 0x0000001c,
    0x00000001, 0x00050036, 0x00000002, 0x00000004,
    0x00000000, 0x00000003, 0x000200f8, 0x00000005,
    0x0004003d, 0x00000007, 0x0000000c, 0x0000000b,
    0x0003003e, 0x00000009, 0x0000000c, 0x00050041,
    0x00000019, 0x0000001a, 0x00000018, 0x00000014,
    0x0004003d, 0x00000015, 0x0000001b, 0x0000001a,
    0x0004003d, 0x00000007, 0x0000001d, 0x0000001c,
    0x00050091, 0x00000007, 0x0000001e, 0x0000001b,
    0x0000001d, 0x00050041, 0x00000008, 0x0000001f,
    0x00000012, 0x00000014, 0x0003003e, 0x0000001f,
    0x0000001e, 0x000100fd, 0x00010038,
};
