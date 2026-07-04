/* Runtime dump - SCROIOElement
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying>
{
    unsigned int _ioObject;
    long _identifier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (long)identifier;
- (SCROIOElement *)copyWithZone:(struct _NSZone *)arg0;
- (int)transport;
- (SCROIOElement *)initWithIOObject:(unsigned int)arg0;
- (unsigned int)ioObject;

@end
