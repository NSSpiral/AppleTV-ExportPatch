/* Runtime dump - MSASPersonInfoManager
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPersonInfoManager : NSObject
{
    NSMutableDictionary * _personIDToPersonInfoDictionary;
    NSString * _pathForPersonInfoDictionary;
}

@property (retain, nonatomic) NSMutableDictionary * personIDToPersonInfoDictionary;
@property (retain, nonatomic) NSString * pathForPersonInfoDictionary;

+ (MSASPersonInfoManager *)allocWithZone:(struct _NSZone *)arg0;
+ (MSASPersonInfoManager *)sharedManager;

- (void)initWithPath:(NSString *)arg0;
- (void).cxx_destruct;
- (char)updateWithSharingRelationship:(id)arg0;
- (NSMutableDictionary *)personIDToPersonInfoDictionary;
- (void)setPersonIDToPersonInfoDictionary:(NSMutableDictionary *)arg0;
- (NSString *)pathForPersonInfoDictionary;
- (void)setPathForPersonInfoDictionary:(NSString *)arg0;
- (NSObject *)firstNameForPersonID:(NSObject *)arg0;
- (NSObject *)lastNameForPersonID:(NSObject *)arg0;
- (NSObject *)fullNameForPersonID:(NSObject *)arg0;
- (NSObject *)emailForPersonID:(NSObject *)arg0;

@end
