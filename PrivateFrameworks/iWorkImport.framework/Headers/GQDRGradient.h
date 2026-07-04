/* Runtime dump - GQDRGradient
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRGradient : NSObject <GQDNameMappable>
{
    struct __CFArray * mStops;
    int mType;
    float mOpacity;
    float mAngle;
    struct CGPoint mStart;
    struct CGPoint mEnd;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (void)dealloc;
- (int)type;
- (float)opacity;
- (struct CGPoint)start;
- (struct CGPoint)end;
- (void).cxx_construct;
- (float)angle;
- (struct __CFArray *)stops;

@end
