/* Runtime dump - CellularPlanVinylTestXPCServer
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CellularPlanVinylTestXPCServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener * fXpcListener;
    NSMutableArray * fXpcConnections;
    <CellularPlanVinylTest> * fDelegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)stop;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (CellularPlanVinylTestXPCServer *)initWithQueue:(struct dispatch_queue_s *)arg0 andDelegate:(NSObject *)arg1;

@end
