/* Runtime dump - SAMPAudiobookCollection
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAudiobookCollection : SAMPCollection

@property (copy, nonatomic) NSString * artist;
@property (copy, nonatomic) NSString * sortArtist;

+ (SAMPAudiobookCollection *)audiobookCollection;
+ (NSDictionary *)audiobookCollectionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setArtist:(NSString *)arg0;
- (NSString *)artist;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)sortArtist;
- (void)setSortArtist:(NSString *)arg0;

@end
