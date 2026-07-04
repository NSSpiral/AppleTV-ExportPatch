/* Runtime dump - SASportsStandingsSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsStandingsSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray * columns;
@property (copy, nonatomic) NSArray * entities;
@property (copy, nonatomic) NSArray * selectedEntities;
@property (nonatomic) char showCardinalPositions;

+ (SASportsStandingsSnippet *)standingsSnippet;
+ (NSDictionary *)standingsSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (void)setEntities:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (NSArray *)columns;
- (void)setColumns:(NSArray *)arg0;
- (NSArray *)entities;
- (NSString *)encodedClassName;
- (NSArray *)selectedEntities;
- (void)setSelectedEntities:(NSArray *)arg0;
- (char)showCardinalPositions;
- (void)setShowCardinalPositions:(char)arg0;

@end
