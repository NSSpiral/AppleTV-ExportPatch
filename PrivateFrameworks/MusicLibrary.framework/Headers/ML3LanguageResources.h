/* Runtime dump - ML3LanguageResources
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3LanguageResources : NSObject <NSSecureCoding>
{
    NSDictionary * _sectionsInfo;
    NSDictionary * _sortingDetails;
    NSString * _canonicalLanguageIdentifier;
}

@property (readonly, nonatomic) NSDictionary * sectionsInfo;
@property (readonly, nonatomic) NSDictionary * sortingDetails;
@property (readonly, nonatomic) NSString * canonicalLanguageIdentifier;

+ (char)supportsSecureCoding;

- (ML3LanguageResources *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)canonicalLanguageIdentifier;
- (NSDictionary *)sectionsInfo;
- (NSDictionary *)sortingDetails;
- (ML3LanguageResources *)initWithSectionsInfo:(NSDictionary *)arg0 sortingDetails:(NSDictionary *)arg1 canonicalLanguageIdentifier:(NSString *)arg2;

@end
