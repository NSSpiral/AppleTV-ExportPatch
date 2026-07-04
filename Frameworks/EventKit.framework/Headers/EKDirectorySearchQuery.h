/* Runtime dump - EKDirectorySearchQuery
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDirectorySearchQuery : NSObject
{
    char _findGroups;
    char _findLocations;
    char _findResources;
    char _findUsers;
    NSSet * _terms;
    unsigned int _resultLimit;
}

@property (retain, nonatomic) NSSet * terms;
@property (nonatomic) char findGroups;
@property (nonatomic) char findLocations;
@property (nonatomic) char findResources;
@property (nonatomic) char findUsers;
@property (nonatomic) unsigned int resultLimit;

- (NSSet *)terms;
- (void)setTerms:(NSSet *)arg0;
- (char)findGroups;
- (void)setFindGroups:(char)arg0;
- (char)findLocations;
- (void)setFindLocations:(char)arg0;
- (char)findResources;
- (void)setFindResources:(char)arg0;
- (char)findUsers;
- (void)setFindUsers:(char)arg0;
- (void)setResultLimit:(unsigned int)arg0;
- (unsigned int)resultLimit;

@end
