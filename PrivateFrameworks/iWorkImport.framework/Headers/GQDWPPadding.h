/* Runtime dump - GQDWPPadding
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPPadding : NSObject <GQDNameMappable>
{
    float mTop;
    float mLeft;
    float mBottom;
    float mRight;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (float)bottom;
- (float)left;
- (float)right;
- (float)top;

@end
