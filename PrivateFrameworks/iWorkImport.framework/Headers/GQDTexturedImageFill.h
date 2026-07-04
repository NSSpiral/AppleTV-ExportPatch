/* Runtime dump - GQDTexturedImageFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTexturedImageFill : NSObject <GQDNameMappable>
{
    int mTechnique;
    GQDColor * mColor;
    GQDFilteredImage * mFilteredImage;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (id)imageBinary;
- (void)invalidateFilteredImage;
- (int)technique;
- (void)dealloc;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;

@end
