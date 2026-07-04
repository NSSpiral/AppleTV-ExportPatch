/* Runtime dump - WebHTMLRepresentationPrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHTMLRepresentationPrivate : NSObject
{
    WebDataSource * dataSource;
    char hasSentResponseToPlugin;
    char includedInWebKitStatistics;
    <WebPluginManualLoader> * manualLoader;
    WAKView * pluginView;
}

@end
