/* Runtime dump - TNHintCacheEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNHintCacheEntry : NSObject
{
    <TSDHint> * mHint;
    char mIsValid;
    struct CGPoint mOrigin;
}

@property (retain) <TSDHint> * hint;
@property char valid;
@property struct CGPoint origin;

- (void)setHint:(<TSDHint> *)arg0;
- (TNHintCacheEntry *)initWithHint:(<TSDHint> *)arg0 origin:(struct CGPoint)arg1;
- (char)isValid;
- (struct CGPoint)origin;
- (void)setOrigin:(struct CGPoint)arg0;
- (<TSDHint> *)hint;
- (void)setValid:(char)arg0;

@end
