/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionCoreAnimationTool, AVVideoCompositionInternal, NSArray;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
    AVVideoCompositionInternal *_videoComposition;
}

@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property(readonly) struct CGSize { float x1; float x2; } renderSize;
@property(readonly) float renderScale;
@property(readonly) NSArray * instructions;
@property(readonly) AVVideoCompositionCoreAnimationTool * animationTool;

+ (id)videoCompositionForAsset:(id)arg1 videoGravity:(id)arg2;
+ (id)videoCompositionForAsset:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setAnimationTool:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCompositor:(id)arg1;
- (id)instructions;
- (id)_postProcessingVideoLayer;
- (int)_auxiliaryTrackID;
- (id)_postProcessingRootLayer;
- (BOOL)_hasPostProcessingLayers;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (BOOL)isValidForAsset:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 validationDelegate:(id)arg3;
- (id)animationTool;
- (id)compositor;
- (id)_serializableInstructions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (float)renderScale;
- (BOOL)_isValidReturningExceptionReason:(id*)arg1;
- (struct CGSize { float x1; float x2; })renderSize;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;

@end