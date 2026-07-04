/* Runtime dump - TSCH3DValueEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DValueEnumerator : NSObject
{
    struct ValueEnumerator mImp;
}

@property (readonly, nonatomic) double value;

- (char)isValidNonZero;
- (NSEnumerator *)enumerator;
- (char)isValid;
- (double)value;
- (void)setValue:(double)arg0;
- (NSObject *)nextObject;
- (unsigned int)index;
- (void).cxx_construct;

@end
