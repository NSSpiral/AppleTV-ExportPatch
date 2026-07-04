/* Runtime dump - BBActionResponse
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBActionResponse : NSObject <NSSecureCoding>
{
    int _actionType;
    NSString * _actionID;
    NSString * _bulletinRecordID;
    NSString * _bulletinPublisherID;
    NSDictionary * _bulletinContext;
    NSString * _bulletinButtonID;
    NSDictionary * _context;
}

@property (nonatomic) int actionType;
@property (copy, nonatomic) NSString * actionID;
@property (copy, nonatomic) NSString * bulletinRecordID;
@property (copy, nonatomic) NSString * bulletinPublisherID;
@property (copy, nonatomic) NSDictionary * bulletinContext;
@property (copy, nonatomic) NSString * bulletinButtonID;
@property (copy, nonatomic) NSDictionary * context;

+ (char)supportsSecureCoding;
+ (NSURLResponse *)actionResponseForResponse:(NSURLResponse *)arg0 bulletinRequest:(NSURLRequest *)arg1;

- (void)dealloc;
- (BBActionResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSDictionary *)context;
- (void)setContext:(NSDictionary *)arg0;
- (void)setActionID:(NSString *)arg0;
- (NSString *)actionID;
- (void)setBulletinContext:(NSDictionary *)arg0;
- (void)setBulletinButtonID:(NSString *)arg0;
- (void)setBulletinRecordID:(NSString *)arg0;
- (void)setBulletinPublisherID:(NSString *)arg0;
- (NSString *)bulletinButtonID;
- (NSString *)bulletinRecordID;
- (NSString *)bulletinPublisherID;
- (NSDictionary *)bulletinContext;
- (void)setActionType:(int)arg0;
- (int)actionType;

@end
