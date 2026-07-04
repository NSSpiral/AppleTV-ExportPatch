/* Runtime dump - ABPersonLinker
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABPersonLinker : NSObject
{
    void * _addressBook;
    NSMutableDictionary * _peopleByFirstName;
    NSMutableDictionary * _peopleByLastName;
    NSMutableDictionary * _peopleByOrganization;
}

+ (char)isAutoLinkingEnabled;
+ (char)isLinkDataValidForAddressBook:(void *)arg0;
+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)arg0 inProcess:(char)arg1;

- (ABPersonLinker *)initWithAddressBook:(void *)arg0;
- (void)makeInitialLinks;
- (void)linkRecentlyAddedPeople;
- (NSObject *)otherPeopleInDatabaseMatchingPerson:(void *)arg0 notIncludingPeople:(id)arg1;
- (char)shouldLinkPerson:(void *)arg0 toPeopleInDatabase:(id)arg1 andNewlyAddedPeople:(id)arg2 inInitialLinking:(char)arg3;
- (void)addPerson:(void *)arg0 toDictionary:(NSDictionary *)arg1 withProperty:(int)arg2;
- (void)removeAllLinks;
- (void)presortPeople:(id)arg0;
- (NSArray *)otherPeopleInArray:(NSArray *)arg0 matchingPerson:(void *)arg1;
- (void)makeLinksForAddedPeople:(id)arg0 inInitialLinking:(char)arg1 countingOuterIterations:(unsigned int *)arg2;
- (void)makeInitialLinksCountingOuterIterations:(unsigned int *)arg0;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg0 withLimit:(int)arg1;
- (char)linkRecentlyAddedPeopleWithLimit:(int)arg0;
- (NSObject *)suggestedPeopleToLinkWithPerson:(void *)arg0 isInitialLinking:(char)arg1;
- (void)linkNewlyAddedPerson:(void *)arg0;
- (void)dealloc;
- (ABPersonLinker *)init;

@end
