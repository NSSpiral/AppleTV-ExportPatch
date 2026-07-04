/* Runtime dump - OABTextBodyProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABTextBodyProperties : NSObject

+ (void)readTextBodyProperties:(NSDictionary *)arg0 textBox:(struct EshTextBox *)arg1 useDefaults:(struct EshTextBox)arg2 state:(NSObject *)arg3;
+ (void)setTextFlow:(int)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)setTextDirection:(int)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)writeTextBodyProperties:(NSDictionary *)arg0 toShapeBase:(struct EshShapeBase *)arg1 state:(struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> >)arg2;
+ (void)setTextRotation:(int)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)setAutoFit:(BOOL)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)setWrap:(int)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)setTextAnchor:(int)arg0 textBodyProperties:(NSDictionary *)arg1;
+ (void)setIsAnchorCenter:(int)arg0 textBodyProperties:(NSDictionary *)arg1;

@end
