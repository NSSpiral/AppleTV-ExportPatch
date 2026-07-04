/* Runtime dump - IKRestrictionsUtilities
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (IKRestrictionsUtilities *)ratingForRestrictionRanking:(id)arg0 inDomain:(NSString *)arg1 countryCode:(NSString *)arg2;
+ (NSDictionary *)_purgableRatingsDictionary;
+ (NSString *)orderedRankingsInDomain:(NSString *)arg0 countryCode:(NSString *)arg1;

- (void)cache:(NSObject *)arg0 willEvictObject:(NSObject *)arg1;

@end
