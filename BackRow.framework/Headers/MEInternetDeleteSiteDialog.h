/* Runtime dump - MEInternetDeleteSiteDialog
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BROptionDialog.h>

@class ATVAddSiteEntry;
@interface MEInternetDeleteSiteDialog : BROptionDialog
{
    ATVAddSiteEntry * _siteEntry;
}

@property (retain) ATVAddSiteEntry * siteEntry;

- (MEInternetDeleteSiteDialog *)initWithSiteInfo:(NSDictionary *)arg0;
- (void)_warningForActionResponse:(NSURLResponse *)arg0;
- (void)setSiteEntry:(ATVAddSiteEntry *)arg0;
- (void)_deleteSite;
- (ATVAddSiteEntry *)siteEntry;
- (void).cxx_destruct;

@end
