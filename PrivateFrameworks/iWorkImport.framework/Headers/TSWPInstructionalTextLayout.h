/* Runtime dump - TSWPInstructionalTextLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPInstructionalTextLayout : TSWPLayout

@property (retain, nonatomic) TSWPStorage * storage;

- (void)setStorage:(TSWPStorage *)arg0;
- (TSWPInstructionalTextLayout *)initWithInfo:(NSDictionary *)arg0 storage:(TSWPStorage *)arg1 frame:(struct CGRect)arg2;
- (char)isInstructional;

@end
