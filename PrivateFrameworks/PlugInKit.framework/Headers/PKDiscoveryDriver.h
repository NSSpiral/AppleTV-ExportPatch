/* Runtime dump - PKDiscoveryDriver
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSDictionary * _attributes;
    unsigned int _flags;
    id _report;
    NSSet * _lastResults;
    int _annotationNotifyToken;
}

@property (retain) NSDictionary * attributes;
@property unsigned int flags;
@property (copy) id report;
@property (retain) NSSet * lastResults;
@property int annotationNotifyToken;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setFlags:(unsigned int)arg0;
- (void)pluginsDidInstall:(id)arg0;
- (void)pluginsDidUninstall:(id)arg0;
- (void)cancel;
- (void)dealloc;
- (NSDictionary *)attributes;
- (void).cxx_destruct;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)setReport:(AWDWifiCallingCallEndReport *)arg0;
- (unsigned int)flags;
- (CoreDAVItem *)report;
- (NSSet *)lastResults;
- (int)annotationNotifyToken;
- (void)setLastResults:(NSSet *)arg0;
- (void)performWithPreviousResults:(NSArray *)arg0 forceNotify:(char)arg1;
- (void)setAnnotationNotifyToken:(int)arg0;
- (PKDiscoveryDriver *)initWithAttributes:(NSDictionary *)arg0 flags:(unsigned int)arg1 report:(AWDWifiCallingCallEndReport *)arg2;

@end
