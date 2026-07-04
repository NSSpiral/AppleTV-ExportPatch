/* Runtime dump - ProblemReportingController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface ProblemReportingController : PSListController
{
    PrefsUILinkLabel * _aboutDiagnosticsLinkLabel;
    PSSpecifier * _diagnosticDataGroupSpecifier;
    PSSpecifier * _filesystemMetadataSnapshotSpecifier;
    NSArray * _appActivitySpecifiers;
    PSSpecifier * _spinnerSpecifier;
}

@property (readonly) PSSpecifier * spinnerSpecifier;
@property (readonly) PSSpecifier * filesystemMetadataSnapshotSpecifier;
@property (readonly) NSArray * appActivitySpecifiers;

+ (char)isProblemReportingEnabled;

- (void)dealloc;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)specifiers;
- (void)dismissAboutSheet:(NSObject *)arg0;
- (NSArray *)appActivitySpecifiers;
- (PSSpecifier *)spinnerSpecifier;
- (PSSpecifier *)filesystemMetadataSnapshotSpecifier;
- (void)snapshot:(NSObject *)arg0;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)shouldShareAppActivityWithAppDevelopers;
- (void)checkDiagnosticsSessionAvailability;
- (void)setProblemReportingEnabled:(char)arg0;
- (void)launchDiagnosticsSession:(NSObject *)arg0;
- (char)shouldEnableProblemReportingForCheckedSpecifier;
- (void)showAboutDiagnosticsSheet;
- (void)showAboutAppAnalyticsSheet;

@end
