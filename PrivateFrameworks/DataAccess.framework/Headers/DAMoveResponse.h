/* Runtime dump - DAMoveResponse
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMoveResponse : NSObject
{
    int _status;
    NSString * _sourceID;
    NSString * _destID;
    DAMessageMoveRequest * _origRequest;
}

@property (nonatomic) int status;
@property (copy, nonatomic) NSString * sourceID;
@property (copy, nonatomic) NSString * destID;
@property (retain, nonatomic) DAMessageMoveRequest * origRequest;

- (NSString *)sourceID;
- (void)setSourceID:(NSString *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setDestID:(NSString *)arg0;
- (DAMessageMoveRequest *)origRequest;
- (DAMoveResponse *)initWithStatus:(int)arg0 sourceID:(NSString *)arg1 destID:(NSString *)arg2;
- (void)setOrigRequest:(DAMessageMoveRequest *)arg0;
- (NSString *)destID;

@end
