//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCVegaWorkerClientDelegate.h"

@class CALayer, CCVegaCARenderer, CCVegaHTMLElement, CCVegaLocalizationFunctions, CCVegaWorker, CCVegaWorkerClient, CCViewRendererDelegate, JSValue, NSArray, NSCalendar, NSLocale, NSMutableArray, NSMutableSet, NSObject<CCVegaRendererDelegate>, NSString;

@interface CCVegaRenderer : NSObject <CCVegaWorkerClientDelegate>
{
    _Bool _isActive;
    NSArray *_data;
    double _width;
    double _height;
    CALayer *_caLayer;
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSString *_contentSizeCategory;
    CCVegaLocalizationFunctions *_localizationFunctions;
    struct CGImage *_currentCGImage;
    NSMutableSet *_pendingDataUpdates;
    unsigned int rendererType;
    CCVegaWorker *worker;
    CCVegaWorkerClient *workerClient;
    NSString *spec;
    NSString *config;
    CCVegaHTMLElement *container;
    double _scaleFactor;
    double _zoomFactor;
    CCVegaCARenderer *CARenderer;
    CCViewRendererDelegate *viewDelegate;
    NSMutableArray *eventQueue;
    NSMutableArray *updateQueue;
    JSValue *renderer;
    NSObject<CCVegaRendererDelegate> *delegate;
    struct CGImage *currentCGImage;
}

- (void).cxx_destruct;
@property __weak NSObject<CCVegaRendererDelegate> *delegate; // @synthesize delegate;
@property(retain, nonatomic) JSValue *renderer; // @synthesize renderer;
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue;
@property(retain) CCViewRendererDelegate *viewDelegate; // @synthesize viewDelegate;
@property(retain) CCVegaCARenderer *CARenderer; // @synthesize CARenderer;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) CCVegaHTMLElement *container; // @synthesize container;
@property(retain, nonatomic) NSString *config; // @synthesize config;
@property(retain, nonatomic) NSString *spec; // @synthesize spec;
@property(retain) CCVegaWorkerClient *workerClient; // @synthesize workerClient;
@property(retain) CCVegaWorker *worker; // @synthesize worker;
@property unsigned int rendererType; // @synthesize rendererType;
- (id)accessibilityElements;
- (struct CGImage *)newImageFromURL:(id)arg1;
- (struct CGColor *)newColorFromCSSString:(id)arg1 alpha:(double)arg2;
- (struct CGColor *)newColorFromCSSString:(id)arg1;
- (void)loadState:(id)arg1;
- (id)saveStateWithNamedDatasets:(id)arg1;
- (void)removeListener:(id)arg1 fromSignalWithName:(id)arg2;
- (id)addListener:(CDUnknownBlockType)arg1 toSignalWithName:(id)arg2;
- (void)setSignalWithName:(id)arg1 toValue:(id)arg2;
- (id)getSignalWithName:(id)arg1;
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingWithCallback:(CDUnknownBlockType)arg3;
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3;
- (void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2;
- (void)setNamedDataset:(id)arg1 rows:(id)arg2;
- (void)setDefaultDataset:(id)arg1;
@property(retain, nonatomic) NSArray *data;
- (void)waitForProcessUpdatesInQueue;
- (void)processUpdatesInQueue:(id)arg1;
- (void)processCurrentUpdateInQueue;
- (void)processEventsInQueue;
- (void)processCurrentEventInQueue;
- (void)waitForRenderingThread;
- (void)rerenderEntireChart;
- (void)triggerEventWithType:(id)arg1 event:(id)arg2;
- (struct CGImage *)CGImage;
- (struct CGImage *)currentBitmap;
@property struct CGImage *currentCGImage; // @synthesize currentCGImage;
- (id)cursor;
- (double)height;
- (double)width;
- (id)vegaContext;
@property(retain) NSString *contentSizeCategory;
@property(retain) NSCalendar *calendar;
@property(retain) NSLocale *locale;
- (void)updateScaleZoomFactor;
- (void)setSize:(struct CGSize)arg1;
- (void)waitForDataUpdateNamed:(id)arg1 thenRun:(CDUnknownBlockType)arg2;
- (void)waitForRunAsync;
- (void)runAsyncWithCallback:(CDUnknownBlockType)arg1;
- (void)runAsync;
- (void)performRunAsync;
- (void)fireUpdateEvent;
- (void)workerContextExit;
- (void)workerContextEnter;
- (void)refreshNativeSignals;
- (void)setupSignalHandlers;
@property _Bool isActive;
@property(retain) CALayer *caLayer;
@property(readonly) BOOL specIsValid;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3 workerClient:(id)arg4;

@end

