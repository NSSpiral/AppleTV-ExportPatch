/* Runtime dump - DAMessageMoveRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMessageMoveRequest : NSObject
{
    NSString * _message;
    NSString * _fromFolder;
    NSString * _toFolder;
    id _context;
}

@property (copy, nonatomic) NSString * message;
@property (copy, nonatomic) NSString * fromFolder;
@property (copy, nonatomic) NSString * toFolder;
@property (retain, nonatomic) id context;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setFromFolder:(NSString *)arg0;
- (void)setToFolder:(NSString *)arg0;
- (NSString *)fromFolder;
- (NSString *)toFolder;
- (DAMessageMoveRequest *)initMoveRequestWithMessage:(NSString *)arg0 fromFolder:(NSString *)arg1 toFolder:(NSString *)arg2;

@end
