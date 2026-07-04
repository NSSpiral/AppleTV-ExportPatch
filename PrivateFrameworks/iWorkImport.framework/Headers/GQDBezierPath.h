/* Runtime dump - GQDBezierPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBezierPath : GQDPath <GQDNameMappable>
{
    struct CGPath * mPath;
    char * mPathStr;
    char mHasVFlip;
    char mVFlip;
    char mHasHFlip;
    char mHFlip;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;
+ (struct __CFString *)createCFStringFromPath:(struct CGPath *)arg0;

- (char)horizontalFlip;
- (char)verticalFlip;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (GQDBezierPath *)initWithPathString:(char *)arg0;
- (char *)pathStr;
- (struct CGPath *)createBezierPath;
- (char)hasVerticalFlip;
- (char)hasHorizontalFlip;
- (void)dealloc;
- (struct CGPath *)path;
- (char)isRectangular;

@end
