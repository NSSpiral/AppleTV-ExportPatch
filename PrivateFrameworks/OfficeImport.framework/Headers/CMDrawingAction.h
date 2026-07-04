/* Runtime dump - CMDrawingAction
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDrawingAction : NSObject
{
    int _type;
    id _value;
    float _floatValue;
}

- (void)dealloc;
- (NSString *)description;
- (int)type;
- (void *)value;
- (float)floatValue;
- (CMDrawingAction *)initWithType:(int)arg0 andValue:(id)arg1;
- (CMDrawingAction *)initWithType:(int)arg0 andFloatValue:(float)arg1;

@end
