/* Runtime dump - QLArchiveTableViewController
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLArchiveTableViewController : UITableViewController
{
    QLArchiveViewer * _archiveViewer;
}

@property QLArchiveViewer * archiveViewer;

- (QLArchiveViewer *)archiveViewer;
- (void)setArchiveViewer:(QLArchiveViewer *)arg0;
- (void)viewDidDisappear:(char)arg0;

@end
