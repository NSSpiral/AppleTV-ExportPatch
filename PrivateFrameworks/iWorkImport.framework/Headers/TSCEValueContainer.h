/* Runtime dump - TSCEValueContainer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEValueContainer : NSObject
{
    struct TSCEValue mValue;
}

- (TSCEValueContainer *)initWithValue:(struct TSCEValue)arg0;
- (struct TSCEValue)value;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
