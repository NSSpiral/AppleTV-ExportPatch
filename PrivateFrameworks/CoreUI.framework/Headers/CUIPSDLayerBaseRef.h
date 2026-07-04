/* Runtime dump - CUIPSDLayerBaseRef
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerBaseRef : NSObject
{
    CUIPSDImageRef * _imageRef;
    unsigned int _layerIndex;
}

@property (readonly) struct CGRect bounds;
@property (readonly) char visibility;
@property (readonly) float opacity;
@property (readonly) float fillOpacity;
@property (readonly) int blendMode;
@property (readonly) char hasLayerMask;
@property (readonly) char hasVectorMask;

- (int)blendMode;
- (struct CGRect)bounds;
- (NSString *)name;
- (float)opacity;
- (struct CPSDLayerRecord *)_psdLayerRecord;
- (char)hasVectorMask;
- (char)hasLayerMask;
- (id)_psdImageRef;
- (char)isLayerGroup;
- (float)fillOpacity;
- (id)layerMaskRef;
- (id)vectorMaskRef;
- (struct CGImage *)_createMaskFromAlphaChannel:(int)arg0;
- (char)visibility;

@end
