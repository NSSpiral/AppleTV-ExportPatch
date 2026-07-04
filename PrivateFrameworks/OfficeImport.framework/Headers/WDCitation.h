/* Runtime dump - WDCitation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCitation : NSObject
{
    WDDocument * mDocument;
    NSString * mSourceType;
    NSMutableArray * mAuthors;
    NSString * mYear;
    NSMutableArray * mTitles;
    NSMutableArray * mUrls;
    NSString * mPeriodicalTitle;
    NSString * mVolume;
    NSString * mNumber;
    NSString * mSection;
    NSString * mPubDate;
    NSString * mPages;
}

@property (retain, nonatomic) NSString * year;
@property (retain, nonatomic) NSMutableArray * authors;
@property (retain, nonatomic) NSString * sourceType;
@property (retain, nonatomic) NSMutableArray * titles;
@property (retain, nonatomic) NSString * periodicalTitle;
@property (retain, nonatomic) NSString * volume;
@property (retain, nonatomic) NSString * number;
@property (retain, nonatomic) NSString * section;
@property (retain, nonatomic) NSString * pubDate;
@property (retain, nonatomic) NSMutableArray * urls;
@property (retain, nonatomic) NSString * pages;

+ (void)initialize;
+ (struct _xmlNode *)nodeAtPath:(struct _xmlNode *)arg0 docPtr:(struct _xmlNode *)arg1;
+ (struct _xmlNode *)trimStyle:(struct _xmlNode *)arg0;
+ (NSObject *)endNoteStringForRefType:(int)arg0;
+ (int)refTypeForWordString:(NSString *)arg0;
+ (NSObject *)wordStringForRefType:(int)arg0;
+ (WDCitation *)subStringOf:(struct _xmlDoc *)arg0 forPath:(struct _xmlNode *)arg1;
+ (NSString *)stringValueForNodeAtPath:(NSString *)arg0 docPtr:(struct _xmlDoc *)arg1 trimStyle:(struct _xmlNode *)arg2;
+ (NSString *)stringValuesForNodesAtPath:(NSString *)arg0 docPtr:(struct _xmlDoc *)arg1 trimStyle:(struct _xmlNode *)arg2;

- (void)dealloc;
- (NSString *)description;
- (NSString *)section;
- (void)setTitles:(NSMutableArray *)arg0;
- (NSMutableArray *)titles;
- (NSString *)sourceType;
- (void)setSourceType:(NSString *)arg0;
- (<UITextInput> *)document;
- (WDCitation *)initWithDocument:(NSObject *)arg0;
- (NSString *)year;
- (void)setYear:(NSString *)arg0;
- (void)setSection:(NSString *)arg0;
- (NSMutableArray *)authors;
- (void)setAuthors:(NSMutableArray *)arg0;
- (NSString *)periodicalTitle;
- (void)setPeriodicalTitle:(NSString *)arg0;
- (void)setNumber:(NSString *)arg0;
- (NSString *)pubDate;
- (void)setPubDate:(NSString *)arg0;
- (NSString *)pages;
- (void)setPages:(NSString *)arg0;
- (NSMutableArray *)urls;
- (NSString *)number;
- (void)setUrls:(NSMutableArray *)arg0;
- (NSString *)volume;
- (void)setVolume:(NSString *)arg0;

@end
