/* Runtime dump - NetflixStorage
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/NetflixNrdObject.h>

@protocol NetflixNrdObjectProtocol;
@interface NetflixStorage : NetflixNrdObject <NetflixNrdObjectProtocol>

@property (readonly, nonatomic) NSString * NO_DEVICE_ACCOUNT;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NetflixStorage *)sharedInstance;

- (void)updateProperty:(NSString *)arg0 value:(NSObject *)arg1;
- (void)clearAll;
- (NSString *)NO_DEVICE_ACCOUNT;
- (NSData *)getData:(NSData *)arg0;
- (unsigned int)length:(AWDCoreRoutineModelLength *)arg0;
- (NSObject *)getItem:(void *)arg0 key:(NSString *)arg1;
- (void)setItem:(NSObject *)arg0 key:(NSString *)arg1 value:(NSObject *)arg2;
- (void)removeItem:(void *)arg0 key:(NSString *)arg1;
- (NSData *)data;
- (void)clear:(NSString *)arg0;

@end
