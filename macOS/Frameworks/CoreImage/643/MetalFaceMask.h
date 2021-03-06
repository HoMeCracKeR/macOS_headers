//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLLibrary, MTLTexture;

__attribute__((visibility("hidden")))
@interface MetalFaceMask : NSObject
{
    id <MTLDevice> _mtlDevice;
    id <MTLLibrary> _mtlLibrary;
    id <MTLComputePipelineState> _mtlKernel_Clear;
    id <MTLComputePipelineState> _mtlKernel_InitMinMax;
    id <MTLComputePipelineState> _mtlKernel_MinMax;
    id <MTLComputePipelineState> _mtlKernel_CalcCubeInputScaling;
    id <MTLComputePipelineState> _mtlKernel_PopulateCube;
    id <MTLComputePipelineState> _mtlKernel_DilateCubeLuma;
    id <MTLComputePipelineState> _mtlKernel_DilateCubeChroma1;
    id <MTLComputePipelineState> _mtlKernel_DilateCubeChroma2;
    id <MTLComputePipelineState> _mtlKernel_ErodeCubeLuma;
    id <MTLComputePipelineState> _mtlKernel_ErodeCubeChroma1;
    id <MTLComputePipelineState> _mtlKernel_ErodeCubeChroma2;
    id <MTLComputePipelineState> _mtlKernel_InitSpanTable;
    id <MTLComputePipelineState> _mtlKernel_GenerateMask;
    id <MTLComputePipelineState> _mtlKernel_GenerateToothMask;
    id <MTLComputePipelineState> _mtlKernel_ConnectSpans;
    id <MTLComputePipelineState> _mtlKernel_PropagateParents;
    id <MTLComputePipelineState> _mtlKernel_PropogateAssociations;
    id <MTLComputePipelineState> _mtlKernel_ResolveAssociations;
    id <MTLComputePipelineState> _mtlKernel_AddSeedPoint;
    id <MTLComputePipelineState> _mtlKernel_DrawSpans;
    id <MTLComputePipelineState> _mtlKernel_DrawEye;
    id <MTLTexture> _colorCubeTex;
    id <MTLTexture> _tempColorCubeTex;
    id <MTLBuffer> _minMaxAtomicBuf;
    id <MTLBuffer> _inputScalingBuf;
    id <MTLBuffer> _labellingSpanTableBuf;
    id <MTLBuffer> _labellingRowStartIdxBuf;
    int _lumaDilateRadius;
    int _lumaErodeRadius;
    int _chromaDilateRadius;
    int _chromaErodeRadius;
}

@property(nonatomic) int chromaErodeRadius; // @synthesize chromaErodeRadius=_chromaErodeRadius;
@property(nonatomic) int chromaDilateRadius; // @synthesize chromaDilateRadius=_chromaDilateRadius;
@property(nonatomic) int lumaErodeRadius; // @synthesize lumaErodeRadius=_lumaErodeRadius;
@property(nonatomic) int lumaDilateRadius; // @synthesize lumaDilateRadius=_lumaDilateRadius;
- (int)drawEyeMaskUsingQuads:(struct MetalFaceMaskEyeQuads_t *)arg1 OutputMaskTexture:(id)arg2 OutputRegion:(struct CGRect)arg3 FaceBounds:(struct CGRect)arg4 CommandBuffer:(id)arg5;
- (int)findToothMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect)arg2 OutputMaskTexture:(id)arg3 OutputRegion:(struct CGRect)arg4 TeethBounds:(struct CGRect)arg5 SeedPoints:(struct CGPoint *)arg6 NumberOfSeedPoints:(unsigned long long)arg7 FillValue:(unsigned char)arg8 CommandBuffer:(id)arg9;
- (int)findSkinMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect)arg2 OutputMaskTexture:(id)arg3 OutputRegion:(struct CGRect)arg4 FaceBounds:(struct CGRect)arg5 SeedPoints:(struct CGPoint *)arg6 NumberOfSeedPoints:(unsigned long long)arg7 FillValue:(unsigned char)arg8 CommandBuffer:(id)arg9;
- (int)trainSkinMaskUsingInputTexture:(id)arg1 InputRegion:(struct CGRect)arg2 QuadRegion:(struct CGPoint [4])arg3 CommandBuffer:(id)arg4;
- (int)clearOutputTexture:(id)arg1 CommandBuffer:(id)arg2;
- (id)initForDevice:(id)arg1;

@end

