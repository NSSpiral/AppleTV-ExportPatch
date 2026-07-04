/* Runtime dump - SAMPReleaseInfo
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>

@property (retain, nonatomic) SACalendar * releaseDate;
@property (nonatomic) int releaseYear;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)releaseInfo;
+ (NSDictionary *)releaseInfoWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (SACalendar *)releaseDate;
- (NSString *)encodedClassName;
- (void)setReleaseYear:(int)arg0;
- (void)setReleaseDate:(SACalendar *)arg0;
- (int)releaseYear;

@end
