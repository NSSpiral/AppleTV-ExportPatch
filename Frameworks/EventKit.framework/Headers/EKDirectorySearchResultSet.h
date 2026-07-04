/* Runtime dump - EKDirectorySearchResultSet
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDirectorySearchResultSet : NSObject
{
    NSSet * _locations;
    NSSet * _groups;
    NSSet * _resources;
    NSSet * _people;
}

@property (retain, nonatomic) NSSet * locations;
@property (retain, nonatomic) NSSet * groups;
@property (retain, nonatomic) NSSet * resources;
@property (retain, nonatomic) NSSet * people;

- (void)setGroups:(NSSet *)arg0;
- (void)setLocations:(NSSet *)arg0;
- (NSSet *)groups;
- (NSSet *)locations;
- (void)setResources:(NSSet *)arg0;
- (NSSet *)resources;
- (void)setPeople:(NSSet *)arg0;
- (NSSet *)people;

@end
