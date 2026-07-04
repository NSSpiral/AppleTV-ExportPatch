/* Runtime dump - RUIRatingInfoDatabase
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRRatingInfoDatabase;

@class BRMediaType;
@interface RUIRatingInfoDatabase : NSObject <BRRatingInfoDatabase>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSArray *)ratingSystemIDs;
- (NSNumber *)defaultSystemID;
- (NSArray *)ratingEntriesForType:(BRMediaType *)arg0 systemID:(NSNumber *)arg1;
- (NSNumber *)ratingSystemIDForRatingSystemLabel:(NSString *)arg0;
- (NSDictionary *)ratingInfoMatchingThreshold:(NSNumber *)arg0 forType:(BRMediaType *)arg1 withSystemID:(NSNumber *)arg2;

@end
