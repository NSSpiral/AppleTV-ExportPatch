/* Runtime dump - TSWPStorageRangeProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageRangeProvider : NSObject
{
    NSString * _identifier;
    struct _NSRange _range;
    NSObject * _object;
}

@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) struct _NSRange range;
@property (readonly, nonatomic) NSObject * object;

- (unsigned int)rangeLength;
- (void)nextRange;
- (unsigned int)rangeStart;
- (unsigned int)rangeEnd;
- (void)dealloc;
- (NSString *)identifier;
- (NSObject *)object;
- (struct _NSRange)range;
- (TSWPStorageRangeProvider *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_construct;
- (void)setRangeStart:(unsigned int)arg0;

@end
