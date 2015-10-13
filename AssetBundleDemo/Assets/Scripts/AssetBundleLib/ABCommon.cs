using UnityEngine;
using System.Collections;
using System;

namespace abl
{
    internal class MainThreadAction
    {
        public System.Object sender { get; private set; }
        public System.Object args { get; private set; }
        public Action<System.Object, System.Object> callback { get; private set; }
        public MainThreadAction(System.Object _sender, System.Object _args, Action<System.Object, System.Object> _callback)
        {
            sender = _sender;
            args = _args;
            callback = _callback;
        }
        private MainThreadAction() { }
    }
}