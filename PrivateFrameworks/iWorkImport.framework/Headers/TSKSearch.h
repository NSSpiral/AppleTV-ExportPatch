/* Runtime dump - TSKSearch
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKSearch : NSObject
{
    char _isComplete;
    NSString * _string;
    unsigned int _options;
    id _hitBlock;
}

@property (copy, nonatomic) NSString * string;
@property (nonatomic) unsigned int options;
@property (copy, nonatomic) id hitBlock;
@property (nonatomic) char isComplete;

- (void)setHitBlock:(id /* block */)arg0;
- (void)setIsComplete:(char)arg0;
- (TSKSearch *)initWithString:(NSString *)arg0 options:(unsigned int)arg1 hitBlock:(id /* block */)arg2;
- (id /* block */)hitBlock;
- (void)dealloc;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (void)setOptions:(unsigned int)arg0;
- (unsigned int)options;
- (char)isComplete;

@end
