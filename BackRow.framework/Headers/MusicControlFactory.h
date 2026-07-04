/* Runtime dump - MusicControlFactory
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRControlFactory;
@protocol BRControlHeightFactory;

@class BRControl;
@interface MusicControlFactory : NSObject <BRControlFactory, BRControlHeightFactory>
{
    <BRSelectionHandler> * _selectionHandler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MusicControlFactory *)initWithDataClient:(ATVDataClient *)arg0 dataClientType:(unsigned int)arg1;
- (BRControl *)controlForData:(NSData *)arg0 currentControl:(BRControl *)arg1 requestedBy:(BRControl *)arg2;
- (float)heightForControlForData:(NSData *)arg0 requestedBy:(BRControl *)arg1;
- (void).cxx_destruct;

@end
