/* Runtime dump - ATVRadioSearchResults
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRadioSearchResults : NSObject
{
    char _hasBeenDisplayed;
    NSString * _searchTerm;
    NSDate * _startDate;
    NSDictionary * _unparsedResponseDictionary;
    NSArray * _sections;
}

@property (copy, nonatomic) NSString * searchTerm;
@property (retain, nonatomic) NSDate * startDate;
@property (copy, nonatomic) NSDictionary * unparsedResponseDictionary;
@property (copy, nonatomic) NSArray * sections;
@property (nonatomic) char hasBeenDisplayed;

- (char)hasBeenDisplayed;
- (void)setHasBeenDisplayed:(char)arg0;
- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;
- (void)setStartDate:(NSDate *)arg0;
- (void)setUnparsedResponseDictionary:(NSDictionary *)arg0;
- (NSDictionary *)unparsedResponseDictionary;
- (NSDate *)startDate;

@end
