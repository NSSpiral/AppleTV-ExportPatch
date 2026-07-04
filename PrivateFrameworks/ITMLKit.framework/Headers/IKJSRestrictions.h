/* Runtime dump - IKJSRestrictions
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSRestrictions : IKJSObject <IKJSRestrictions>

@property (readonly, nonatomic) int maxAppRank;
@property (readonly, nonatomic) int maxMovieRank;
@property (readonly, nonatomic) int maxTVShowRank;
@property (readonly, nonatomic) char allowArtistActivity;
@property (readonly, nonatomic) char allowsExplicit;
@property (readonly, nonatomic) char allowsErotica;
@property (readonly, nonatomic) NSString * maxAppRating;
@property (readonly, nonatomic) char appInstallationAllowed;

+ (NSString *)restrictionsDidChangeNotificationName;

- (id)_ratingForSetting:(id)arg0 domain:(NSString *)arg1 countryCode:(NSString *)arg2;
- (id)_contentRestrictionsCountryCode;
- (id)maxMovieRatingForCountry:(id)arg0;
- (id)maxTVShowRatingForCountry:(id)arg0;
- (int)maxAppRank;
- (int)maxMovieRank;
- (int)maxTVShowRank;
- (char)allowArtistActivity;
- (char)allowsExplicit;
- (char)allowsErotica;
- (NSString *)maxAppRating;
- (char)appInstallationAllowed;

@end
