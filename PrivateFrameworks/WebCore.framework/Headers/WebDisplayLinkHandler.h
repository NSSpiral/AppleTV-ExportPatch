/* Runtime dump - WebDisplayLinkHandler
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebDisplayLinkHandler : NSObject
{
    struct DisplayRefreshMonitorIOS * m_monitor;
    CADisplayLink * m_displayLink;
}

- (void)dealloc;
- (void)invalidate;
- (void)handleDisplayLink:(id)arg0;
- (WebDisplayLinkHandler *)initWithMonitor:(struct DisplayRefreshMonitorIOS *)arg0;

@end
