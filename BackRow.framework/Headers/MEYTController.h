/* Runtime dump - MEYTController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class RUIYTListDataSourceAspect;
@interface MEYTController : BRViewController
{
    RUIYTListDataSourceAspect * _listDataSourceAspect;
}

+ (void)initialize;

- (void)wasPushed;
- (void)wasPopped;
- (void)_preferredAccountEstablished:(id)arg0;
- (void)_preferredAccountRemoved:(id)arg0;
- (void)_userLoggedInOrOut:(id)arg0;
- (void)dealloc;
- (MEYTController *)init;
- (NSString *)identifier;
- (NSString *)accessibilityLabel;
- (NSArray *)_sections;
- (void).cxx_destruct;

@end
