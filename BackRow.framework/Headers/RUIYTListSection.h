/* Runtime dump - RUIYTListSection
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTListSection : NSObject
{
    char _shouldDisplaySectionDivderHint;
    id _resources;
}

@property char shouldDisplaySectionDivderHint;
@property (retain) id resources;

- (char)shouldDisplaySectionDivderHint;
- (void)setShouldDisplaySectionDivderHint:(char)arg0;
- (void).cxx_destruct;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;

@end
