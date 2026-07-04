/* Runtime dump - GQDRLineEnd
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRLineEnd : NSObject <GQDNameMappable>
{
    GQDBezierPath * mPath;
    struct CGPoint mEndPoint;
    char mIsFilled;
    double mScale;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (char *)pathStr;
- (void)dealloc;
- (double)scale;
- (struct CGPath *)path;
- (void).cxx_construct;
- (struct CGPoint)endPoint;
- (char)isFilled;

@end
