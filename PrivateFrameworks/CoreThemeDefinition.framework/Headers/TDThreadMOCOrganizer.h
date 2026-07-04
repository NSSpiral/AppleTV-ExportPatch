/* Runtime dump - TDThreadMOCOrganizer
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDThreadMOCOrganizer : NSObject
{
    NSThread * mainThread;
    CoreThemeDocument * document;
}

- (NSThread *)mainThread;
- (TDThreadMOCOrganizer *)init;
- (CoreThemeDocument *)document;
- (TDThreadMOCOrganizer *)initWithDocument:(CoreThemeDocument *)arg0 mainThread:(NSThread *)arg1;
- (id)threadMOC;
- (id)mainMOC;
- (void)setThreadMOC:(id)arg0;

@end
